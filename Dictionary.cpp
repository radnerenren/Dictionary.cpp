// Faustino, Darren Wayne M.
// 12-CPE-01
// Dictionary in C++

#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string name;
        cout << "Search a Word (or type 'Exit' to quit): ";
        getline(cin, name);

        if (name == "Exit") {
            break;
        } else if (name == "La Llorona") {
            cout << "A ghostly figure in Mexican folklore, often depicted as a woman in white who mourns her drowned children. According to the legend, she wanders near bodies of water, weeping and calling out for her lost children. Her story is often used to warn children to stay away from water at night." << endl;
        } else if (name == "Tiamat") {
            cout << "A primordial goddess of the sea, depicted as a dragon-like creature, who fought the god Marduk in the creation myth." << endl;
        } else if (name == "Nian") {
            cout << "A mythical beast in Chinese folklore, said to emerge from the mountains to terrorize villages, especially during the Lunar New Year." << endl;
        } else if (name == "Atalanta") {
            cout << "A famed hunter and warrior in Greek mythology, known for her speed and her roles in the hunt for the Calydonian Boar." << endl;
        } else if (name == "Inanna") {
            cout << "The goddess of love, beauty, and war in Sumerian mythology, known for her journey to the underworld." << endl;
        } else if (name == "Fenrir") {
            cout << "A monstrous wolf destined to fight and kill Odin during Ragnarok." << endl;
        } else if (name == "Set") {
            cout << "The god of chaos, desert, and storms in ancient Egyptian mythology, often portrayed as an antagonist to other gods like Osiris." << endl;
        } else if (name == "Arachne") {
            cout << "A talented mortal weaver who was transformed into a spider by Athena after challenging her in a weaving contest." << endl;
        } else if (name == "Ganesha") {
            cout << "The elephant-headed god of wisdom, prosperity, and the remover of obstacles in Hinduism." << endl;
        } else if (name == "Cerberus") {
            cout << "The three-headed dog guards the gates of the underworld, preventing souls from escaping." << endl;
        } else if (name == "Echidna") {
            cout << "The mother of many famous monsters in Greek mythology, including Cerberus and the Hydra, often depicted as a half-woman, half-snake creature." << endl;
        } else if (name == "Valkyrie") {
            cout << "Female warriors who serve Odin, choosing which warriors will die and bringing them to Valhalla." << endl;
        } else if (name == "Amaterasu") {
            cout << "The sun goddess in Shinto mythology, and one of the most important deities in the Japanese pantheon." << endl;
        } else if (name == "Mjolnir") {
            cout << "The magical hammer of Thor, capable of summoning thunder and lightning and never missing its target." << endl;
        } else if (name == "Persephone") {
            cout << "Queen of the underworld and goddess of spring, abducted by Hades to rule by his side." << endl;
        } else if (name == "Nuckelavee") {
            cout << "A terrifying, skinless horse-like demon from Orcadian mythology." << endl;
        } else if (name == "Rusalka") {
            cout << "A water spirit or ghost of a young woman, often associated with lakes and rivers, known for luring men to their doom." << endl;
        } else if (name == "Quetzalcoatl") {
            cout << "The feathered serpent god of wind, rain, and creation in Aztec mythology." << endl;
        } else if (name == "Medusa") {
            cout << "A Gorgon, a monster with snakes for hair, whose gaze could turn people to stone." << endl;
        } else if (name == "Yggdrasil") {
            cout << "The World Tree in Norse mythology, connecting all the nine realms of existence." << endl;
        } else if (name == "Phoenix") {
            cout << "A mythical bird that regenerates by bursting into flames and rising again from its ashes, symbolizing rebirt and immortality." << endl;
        } else if (name == "Banshee") {
            cout << "A wailing female spirit in Irish folklore, whose cries foretell the death of a family member." << endl;
        } else if (name == "Hermes") {
            cout << "The messenger of the gods, god of travel, trade, and the thieves, often depected with winged sandals." << endl;
        } else if (name == "Charybdis") {
            cout << "A monstrous sea creature that creates a deadly whirlpool, swallowing ships and sailors, associated with the myth of Odysseus." << endl;
        } else if (name == "Zeus") {
            cout << "The king of the gods in Greek mythology, ruler of Mount Olympus, and god of thunder and lighting." << endl;
        } else if (name == "Thor") {
            cout << "God of thunder, storms, and protection, known for wielding the hammer Mjolnir." << endl;
        } else if (name == "Anansi") {
            cout << "A spider god and trickster figure in West African folklore, often depicted as a storyteller and wise figure." << endl;
        } else if (name == "Hades") {
            cout << "God of the underworld, ruling over the souls of the dead and the riches of the earth." << endl;
        } else if (name == "Kali") {
            cout << "The goddess of destruction and transformation, known for her fearsome appearance and her role in breaking down illusions." << endl;
        } else if (name == "Odin") {
            cout << "The Allfather, ruler of the gods in Norse mythology, god of wisdom, war, and poetry." << endl;
        } else {
            cout << "Word is not on the List!" << endl;
        }
    }

    return 0;
}