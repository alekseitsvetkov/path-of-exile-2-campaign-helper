#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <QMap>
#include <QString>
#include <QStringList>

// Словарь соответствия кодов локаций реальным названиям
const QMap<QString, QString> locationMap = {
    {"G1_town", "Clearfell Encampment"},
    {"G1_2", "Clearfell"},
    {"G1_3", "Mud Burrow"},
    {"G1_4", "Grelwood"},
    {"G1_5", "Red Vale"},
    {"G1_6", "Grim Tangle"},
    {"G1_7", "Cemetery of the Eternals"},
    {"G1_8", "Mausoleum of the Praetor"},
    {"G1_9", "Tomb of the Consort"},
    {"G1_11", "Hunting Grounds"},
    {"G1_12", "Freythorn"},
    {"G1_13_1", "Ogham Farmlands"},
    {"G1_13_2", "Ogham Village"},
    {"G1_14", "Manor Ramparts"},
    {"G1_15", "Ogham Manor"},
    {"G2_1", "Vastiri Outskirts"},
    {"G2_town", "Arduna Caravan"},
    {"G2_10_1", "Mawdun Quarry"},
    {"G2_10_2", "Mawdun Mine"},
    {"G2_2", "Traitor’s Passage"},
    {"G2_3", "Halani Gates"},
    {"G2_4_1", "Keth"},
    {"G2_4_2", "Lost City"},
    {"G2_4_3", "Buried Shrines"},
    {"G2_5_1", "Mastodon Badlands"},
    {"G2_5_2", "Bone Pits"},
    {"G2_6", "Valley of the Titans"},
    {"G2_7", "Titan Grotto"},
    {"G2_8", "Deshar"},
    {"G2_9_1", "Path of Mourning"},
    {"G2_9_2", "Spires of Deshar"},
    {"G2_12_1", "Dreadnought"},
    {"G2_12_2", "Dreadnought Vanguard"}
};

// Словарь соответствия кодов локаций списку изображений
const QMap<QString, QStringList> locationImages = []() {
    QMap<QString, QStringList> map;
    map.insert("G1_2", QStringList{":/images/G1_2_1.png", ":/images/G1_2_2.png"});
    map.insert("G1_3", QStringList{":/images/G1_3.png"});
    map.insert("G1_4", QStringList{":/images/G1_4.png"});
    map.insert("G1_5", QStringList{":/images/G1_5.png"});
    map.insert("G1_6", QStringList{":/images/G1_6.png"});
    map.insert("G1_7", QStringList{":/images/G1_7.png"});
    map.insert("G1_8", QStringList{":/images/G1_8.png"});
    map.insert("G1_9", QStringList{":/images/G1_9.png"});
    map.insert("G1_11", QStringList{":/images/G1_11_1.png", ":/images/G1_11_2.png"});
    map.insert("G1_12", QStringList{":/images/G1_12.png"});
    map.insert("G1_13_1", QStringList{":/images/G1_13_1_1.png", ":/images/G1_13_1_2.png"});
    map.insert("G1_13_2", QStringList{":/images/G1_13_2.png"});
    map.insert("G1_14", QStringList{":/images/G1_14.png"});
    map.insert("G1_15", QStringList{":/images/G1_15_1.png", ":/images/G1_15_2.png", ":/images/G1_15_3.png"});

    return map;
}();

// const QMap<QString, QStringList> locationImages = {
//     {"G1_2", {":/images/G1_2_1.png", ":/images/G1_2_2.png"}},
//     {"G1_3", {":/images/G1_3.png"}},
//     {"G1_4", {":/images/G1_4.png"}},
//     {"G1_5", {":/images/G1_5.png"}},
//     {"G1_6", {":/images/G1_6.png"}},
//     {"G1_7", {":/images/G1_7.png"}},
//     {"G1_8", {":/images/G1_8.png"}},
//     {"G1_9", {":/images/G1_9.png"}},
//     {"G1_11", {":/images/G1_11_1.png", ":/images/G1_11_2.png"}},
//     {"G1_12", {":/images/G1_12.png"}},
//     {"G1_13_1", {":/images/G1_13_1_1.png", ":/images/G1_13_1_2.png"}},
//     {"G1_13_2", {":/images/G1_13_2.png"}},
//     {"G1_14", {":/images/G1_14.png"}},
//     {"G1_15", {":/images/G1_15_1.png", ":/images/G1_15_2.png", ":/images/G1_15_3.png"}},
//     // {"G2_1", "Vastiri Outskirts"},
//     // {"G2_town", "Arduna Caravan"},
//     // {"G2_10_1", "Mawdun Quarry"},
//     // {"G2_10_2", "Mawdun Mine"},
//     // {"G2_2", "Traitor’s Passage"},
//     // {"G2_3", "Halani Gates"},
//     // {"G2_4_1", "Keth"},
//     // {"G2_4_2", "Lost City"},
//     // {"G2_4_3", "Buried Shrines"},
//     // {"G2_5_1", "Mastodon Badlands"},
//     // {"G2_5_2", "Bone Pits"},
//     // {"G2_6", "Valley of the Titans"},
//     // {"G2_7", "Titan Grotto"},
//     // {"G2_8", "Deshar"},
//     // {"G2_9_1", "Path of Mourning"},
//     // {"G2_9_2", "Spires of Deshar"},
//     // {"G2_12_1", "Dreadnought"},
//     // {"G2_12_2", "Dreadnought Vanguard"}
// };


#endif // LOCATIONS_H
