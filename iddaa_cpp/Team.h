#ifndef _IDDAA_TEAM_H_
#define _IDDAA_TEAM_H_
#include <string>
#include <vector>
#include "Match.h"
class Team {
private:

public:
	std::string name;
	std::vector<Match> matches;
	unsigned int num_of_matches = 0;
	// match results
	unsigned int num_of_wins = 0;
	unsigned int num_of_losses = 0;
	unsigned int num_of_draws = 0;
	unsigned int num_of_home_wins = 0;
	unsigned int num_of_away_wins = 0;
	unsigned int num_of_first_half_wins = 0;
	unsigned int num_of_first_half_losses = 0;
	unsigned int num_of_second_half_wins = 0;
	unsigned int num_of_second_half_losses = 0;
	
	//goals
	unsigned int num_of_goals = 0;
	unsigned int num_of_rec_goals = 0;
	unsigned int num_of_first_half_goals = 0;
	unsigned int num_of_first_half_rec_goals = 0;
	unsigned int num_of_second_half_goals = 0;
	unsigned int num_of_second_half_rec_goals = 0;
	unsigned int num_of_above_2_5_matches = 0;
	unsigned int num_of_below_3_5_matches = 0;
	unsigned int num_of_above_1_5_half_matches = 0;
	unsigned int num_of_below_0_5_half_matches = 0;
	unsigned int num_of_clean_sheets = 0;

	//corners
	unsigned int num_of_first_half_corners = 0;
	unsigned int num_of_second_half_corners = 0;
	unsigned int num_of_corners = 0;

	Team();
	Team(std::string);
};

#endif