#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int k = 0; k < voter_count; k++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }


    // Display winner of election
    print_winner();

}
// Update vote totals given a new vote
bool vote(string name)
{
    int flag=0;
    for (int i = 0; i < candidate_count; i++)
    {
        if(strcmp(candidates[i].name,name)==0) {
            candidates[i].votes = candidates[i].votes + 1;
            flag=1;
        }
}
if(flag==1) {
    return true;

} else {
    return false;
}
}

// // Print the winner (or winners) of the election
// void print_winner(void)
// {
// //  for (int i=0;i<candidate_count;++i) {
// //         for (int j=i+1;j<candidate_count;++j) {
// //         if(candidates[i].votes < candidates[i+1].votes) {
// //             candidate temp =  candidates[i];
// //             candidates[i] = candidates[i+1];
// //             candidates[i+1] = temp;
// //         }
// //         }
// int max;
// for (int i=0;i<candidate_count;++i) {
//         for (int j=i+1;j<candidate_count;++j) {
//         if(candidates[i].votes < candidates[i+1].votes) {
//             max = candidates[i+1].votes;
//         }
//         }
// //printf("%s %i\n",candidates[i].name, candidates[i].votes);

// //printf("%i",max);
// for (int l=0;l<candidate_count;l++) {
//     if(max==candidates[l].votes) {
//            printf("%s\n",candidates[l].name);
//         }
//         else if(max==candidates[l].votes && candidates[l].votes == candidates[l+1].votes) {
//                 printf("%s\n %s\n",candidates[l].name, candidates[l+1].name);
//         }
// }
//         }

// }

void print_winner(void)
{
    int maximum_vote = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > maximum_vote)
        {
            maximum_vote = candidates[i].votes;
        }
    }

    for (int i = 0; i < candidate_count; i++)
    {

        if (candidates[i].votes == maximum_vote)
        {
            printf("%s\n", candidates[i].name);
        }
    }

    return;
}