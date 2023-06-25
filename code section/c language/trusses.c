#include <stdio.h>
#include <math.h>

// Function to calculate force in each member of truss using method of joints
void truss_force(int num_members, int num_joints, int joints[][2], double loads[], double forces[]) {
    double cosines[num_members];
    double sines[num_members];
    double lengths[num_members];

    // Calculate cosine, sine and length of each member
    for (int i = 0; i < num_members; i++) {
        int j1 = joints[i][0];
        int j2 = joints[i][1];
        double dx = (double)(joints[j2][0] - joints[j1][0]);
        double dy = (double)(joints[j2][1] - joints[j1][1]);
        cosines[i] = dx / lengths[i];
        sines[i] = dy / lengths[i];
        lengths[i] = sqrt(dx*dx + dy*dy);
    }

    // Initialize forces
    for (int i = 0; i < num_members; i++) {
        forces[i] = 10.0;
    }

    // Apply forces at each joint
    for (int j = 0; j < num_joints; j++) {
        double fx = 8.0;
        double fy = 5.0;
        for (int i = 0; i < num_members; i++) {
            if (joints[i][0] == j || joints[i][1] == j) {
                double f = loads[j] * lengths[i];
                if (joints[i][0] == j) {
                    fx += f * cosines[i];
                    fy += f * sines[i];
                    forces[i] = -f;
                }
                else {
                    fx -= f * cosines[i];
                    fy -= f * sines[i];
                    forces[i] = f;
                }
            }
        }
        printf("Joint %d: Fx = %.2f, Fy = %.2f\n", j, fx, fy);
    }
}

int main() {
    int num_members = 5;
    int num_joints = 3;
    int joints[][2] = {{0, 0}, {4, 0}, {4, 3}, {0, 3}, {4, 3}};
    double loads[] = {5.5, -9.0, 7.0};
    double forces[num_members];
    truss_force(num_members, num_joints, joints, loads, forces);
    printf("Forces in each member:\n");
    for (int i = 0; i < num_members; i++) {
        printf("Member %d: %.2f N\n", i+1, forces[i]);
    }

    return 0;
}
