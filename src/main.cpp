#include <iostream>
#include <string.h>

int trackTotal = 0;
int unsures = 0; // At end present how many unsures there are

class question {
    public:
        int evaluateResponce(std::string res){
            // Acceptable responces = no, yes, sno, syes, unsure
            int track = 0;
            if(res == "no"){
                track--;
            } if(res == "yes"){
                track++;
            } if(res == "sno"){
                track -= 2;
            } if (res == "syes"){
                track += 2;
            } if(res == "unsure"){
                unsures++;
            }
            return track;
        }
        question(std::string questionWords){
            std::cout << questionWords;
            getline(std::cin, responce);
            trackTotal += evaluateResponce(responce);
        };
        ~question(){
            exit(0);
        };
    protected:
        std::string responce;
};

class results {
    public:
        void word_results(int current_track){
            if(current_track <= -10){
                std::cout << result_type_lowest_output << "\n";
            }

            if(current_track <= -5 && current_track > -10){
                std::cout << result_type_lower_output << "\n";
            }

            if(current_track <= -1 && current_track > -5){
                std::cout << result_type_low_output << "\n";
            }

            if(current_track == 0){
                std::cout << result_type_neutral_output << "\n";
            }

            if(current_track >= 10){
                std::cout << result_type_highest_output << "\n";
            }

            if(current_track >= 5 && current_track < 10){
                std::cout << result_type_higher_output << "\n";
            } 

            if(current_track >= 1 && current_track < 5){
                std::cout << result_type_high_output << "\n";
            }
        }

        void configure(std::string what_to_config, std::string what_to_change_to){
            if(what_to_config == "lowest"){
                result_type_lowest_output = what_to_change_to;
            }

            if(what_to_config == "lower"){
                result_type_lower_output = what_to_change_to;
            }

            if(what_to_config == "low"){
                result_type_low_output = what_to_change_to;
            }

            if(what_to_config == "neutral"){
                result_type_neutral_output = what_to_change_to;
            }

            if(what_to_config == "high"){
                result_type_high_output = what_to_change_to;
            }

            if(what_to_config == "higher"){
                result_type_higher_output = what_to_change_to;
            }

            if(what_to_config == "highest"){
                result_type_highest_output = what_to_change_to;
            }
        }

        results(std::string results_type){
            if(results_type == "word"){
                word_results(trackTotal);
            }
        };

    protected:
        std::string result_type_lowest_output = "";
        std::string result_type_lower_output = "";
        std::string result_type_low_output = "";
        std::string result_type_neutral_output = "";
        std::string result_type_high_output = "";
        std::string result_type_higher_output = "";
        std::string result_type_highest_output = "";
        
};

int main(int argc, char *argv[]){
    question q1("This is an example question: ");
    question q2("This is for demonstration purposes: ");
    std::cout << "Current TrackTotal: " << trackTotal << "\n";
    std::cout << "Total Number Of Unsures: " << unsures << "\n";
    results r("word");
    system("pause");
    return 0;
}