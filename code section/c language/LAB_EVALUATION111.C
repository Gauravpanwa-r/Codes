#include <stdio.h>

int main() {
    int num_members;
    printf("Enter the number of truss members: ");
    scanf("%d", &num_members);

    // Define an array to store the force in each truss member
    int forces[num_members];

    // Input the known force in one truss member
    int known_force;
    printf("Enter the force in one truss member: ");
    scanf("%d", &known_force);

    // Calculate the force in each truss member using the method of joints
    int i;
    for (i = 0; i < num_members; i++) {
        // Input the joint numbers and member length for each truss member
        int joint1, joint2, length;
        printf("Enter the joint numbers and length for truss member %d: ", i+1);
        scanf("%d %d %d", &joint1, &joint2, &length);

        // If the truss member has the known force, assign it to the forces array
        if (joint1 == 1 && joint2 == 2) {
            forces[i] = known_force;
        }
        else {
            // Calculate the force in the truss member using the method of joints
            int force = (length * forces[0]) / length_between_joints(joint1, joint2);
            forces[i] = force;
        }
    }

    // Output the force in each truss member
    for (i = 0; i < num_members; i++) {
        printf("Force in truss member %d: %d\n", i+1, forces[i]);
    }

    return 0;
}

// Function to calculate the length between two joints
int length_between_joints(int joint1, int joint2) {
    // Calculate the length between two joints using their coordinates
    // ...
}
