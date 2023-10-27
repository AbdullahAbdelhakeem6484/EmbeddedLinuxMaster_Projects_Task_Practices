/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October ,1 2023
* Description: Git Manager
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs:
* Outputs:
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include<iostream>
#include<vector>
#include<string>
class GitFile{
    public:
        std::string filaname;
        std::string content;

        GitFile(const std::string& n , const std::string & c):filaname(n), content(c){}
};
class GitCommit{
    public:
        std::vector<GitFile> files;
        void addFile(const std::string filename , const std::string & content)
        {
            files.emplace_back(filename, content);
        }
};

class GitRepository{
    private:
        std::vector<GitCommit> commitHistory;
    public:
        void initializeRepository(){
            std::cout << "Git Repository initialized. \n";
        }
        void addFile(const std::string & filename,  const std::string & content)
        {
            GitCommit commit;
            commit.addFile(filename, content);
            commitHistory.push_back(commit);
            std::cout << "Added file: " << filename  << std::endl;
        }
        void commitChanges(){
            std::cout << "Changes commited \n";
        }

        void viewCommitHistory(){
            std::cout << "Commit Histroy: \n";
            for(size_t i=0; i<commitHistory.size();++i)
            {
                std::cout << "Commit "<< i+1 << ":\n";
                for(const auto & file : commitHistory[i].files)
                {
                    std::cout << " File: " << file.filaname << "\n";
                    std::cout << " Content:\n" << file.content << "\n";
                }
                std::cout << "-----------------------------\n";
            }
        }
};

int main(){
    GitRepository repository;
    repository.initializeRepository();

    repository.addFile("file.txt", "Contents of file1");
    repository.commitChanges();

    repository.addFile("file2.txt", "Contents of File2");
    repository.commitChanges();

    repository.viewCommitHistory();
    return 0;
}