#include <iostream>
#include <vector>
#include <map>

std::vector<std::string> langs;
std::map<std::string, std::string> code;

bool isLanguage(std::string lang) {
    bool result = false;
    for (auto &l : langs) {
        if (lang == l) {
            result = true;
            break;
        }
    }
}

void run() {
    std::cout << ">> \"Hello World\"\n"
                 "-------------------------\n"
                 "Select the language you want\n"
                 "a simple hello world program in.\n\n"
                 "Type 'list' for a list of\n"
                 "all available languages.\n"
                 "-------------------------";

    std::string input = "";
    do {
        std::cout << "\n>";
        std::cin >> input;

        if (input == "list") {
            for (int i = 0; i < langs.size(); ++i)
                std::cout << langs.at(i) << '\n';
        }

    } while (input == "list");

    if (isLanguage(input))
        std::cout << '\n' << code.at(input);
    else
        std::cout << input << " is not a valid language!\n";
}

void fillMap() {
    code["c"] = "#include <stdio.h>\n\n"
                "int main() {\n"
                "\tprintf(\"Hello World\\n\");\n"
                "\treturn 0;\n"
                "}";
    code["c++"] = "#include <iostream>\n\n"
                  "int main() {\n"
                  "\tstd::cout << \"Hello World\\n\";\n"
                  "\treturn 0;\n"
                  "}";
    code["go"] = "package main\n\n"
                 "import \"fmt\"\n\n"
                 "func main() {\n"
                 "\tfmt.Println(\"Hello World\"\n"
                 "}";
    code["rust"] = "fn main() {\n"
                   "\tprintln!(\"Hello World\");\n"
                   "}";

    code["javascript"] = "console.log(\"Hello World\")";
    code["python"] = "print(\"Hello World\")";
    code["lua"] = "print(\"Hello World\")";
    code["ruby"] = "puts \"Hello World\"";

    code["swift"] = "print(\"Hello World\")";

    code["c#"] = "using System;\n\n"
                 "class Hello \n"
                 "{\n"
                 "\tstatic void Main(string[] args)\n"
                 "\t{\n"
                 "\t\tConsole.WriteLine(\"Hello World!\");\n"
                 "\t}\n"
                 "}";

    code["dart"] = "void main() {\n"
                   "\tprint('Hello, World!');\n"
                   "}";
    code["java"] = "public class Main {\n\n"
                   "\tpublic static void main(String[] args) {\n"
                   "\t\tSystem.out.println(\"Hello World\");\n"
                   "\t}\n\n"
                   "}";
    code["groovy"] = "println \"Hello World!\"";
    code["scala"] = "object Main {\n\n"
                    "\tdef main(args: Array[String]) = {\n"
                    "\t\tprintln(\"Hello world\")\n"
                    "\t}\n\n"
                    "}";
    code["kotlin"] = "fun main() {\n"
                     "\tprintln(\"Hello World\")\n"
                     "}";

    code["haskell"] = "main = putStrLn \"Hello, World!\"";
    code["f#"] = "[<EntryPoint>]\n"
                 "let main argv = \n"
                 "\tprintfn \"Hello, World!\"\n"
                 "\t0";

    code["bash"] = "echo Hello World";

    for (std::map<std::string, std::string>::iterator it = code.begin(); it != code.end(); ++it)
        langs.push_back(it->first);
}

int main() {
    fillMap();
    run();

    return 0;
}
