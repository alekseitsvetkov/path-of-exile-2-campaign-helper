#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <QMap>
#include <QString>
#include <QStringList>

// Словарь соответствия кодов локаций реальным названиям
const QMap<QString, QString> locationMap = {
    // G1 Locations
    {"G1_town", "Clearfell Encampment"},
    {"C_G1_town", "Clearfell Encampment"},
    {"G1_2", "Clearfell"},
    {"C_G1_2", "Clearfell"},
    {"G1_3", "Mud Burrow"},
    {"C_G1_3", "Mud Burrow"},
    {"G1_4", "Grelwood"},
    {"C_G1_4", "Grelwood"},
    {"G1_5", "Red Vale"},
    {"C_G1_5", "Red Vale"},
    {"G1_6", "Grim Tangle"},
    {"C_G1_6", "Grim Tangle"},
    {"G1_7", "Cemetery of the Eternals"},
    {"C_G1_7", "Cemetery of the Eternals"},
    {"G1_8", "Mausoleum of the Praetor"},
    {"C_G1_8", "Mausoleum of the Praetor"},
    {"G1_9", "Tomb of the Consort"},
    {"C_G1_9", "Tomb of the Consort"},
    {"G1_11", "Hunting Grounds"},
    {"C_G1_11", "Hunting Grounds"},
    {"G1_12", "Freythorn"},
    {"C_G1_12", "Freythorn"},
    {"G1_13_1", "Ogham Farmlands"},
    {"C_G1_13_1", "Ogham Farmlands"},
    {"G1_13_2", "Ogham Village"},
    {"C_G1_13_2", "Ogham Village"},
    {"G1_14", "Manor Ramparts"},
    {"C_G1_14", "Manor Ramparts"},
    {"G1_15", "Ogham Manor"},
    {"C_G1_15", "Ogham Manor"},
    // G2 Locations
    {"G2_1", "Vastiri Outskirts"},
    {"C_G2_1", "Vastiri Outskirts"},
    {"G2_town", "Arduna Caravan"},
    {"C_G2_town", "Arduna Caravan"},
    {"G2_10_1", "Mawdun Quarry"},
    {"C_G2_10_1", "Mawdun Quarry"},
    {"G2_10_2", "Mawdun Mine"},
    {"C_G2_10_2", "Mawdun Mine"},
    {"G2_2", "Traitor’s Passage"},
    {"C_G2_2", "Traitor’s Passage"},
    {"G2_3", "Halani Gates"},
    {"C_G2_3", "Halani Gates"},
    {"G2_4_1", "Keth"},
    {"C_G2_4_1", "Keth"},
    {"G2_4_2", "Lost City"},
    {"C_G2_4_2", "Lost City"},
    {"G2_4_3", "Buried Shrines"},
    {"C_G2_4_3", "Buried Shrines"},
    {"G2_5_1", "Mastodon Badlands"},
    {"C_G2_5_1", "Mastodon Badlands"},
    {"G2_5_2", "Bone Pits"},
    {"C_G2_5_2", "Bone Pits"},
    {"G2_6", "Valley of the Titans"},
    {"C_G2_6", "Valley of the Titans"},
    {"G2_7", "Titan Grotto"},
    {"C_G2_7", "Titan Grotto"},
    {"G2_8", "Deshar"},
    {"C_G2_8", "Deshar"},
    {"G2_9_1", "Path of Mourning"},
    {"C_G2_9_1", "Path of Mourning"},
    {"G2_9_2", "Spires of Deshar"},
    {"C_G2_9_2", "Spires of Deshar"},
    {"G2_12_1", "Dreadnought"},
    {"C_G2_12_1", "Dreadnought"},
    {"G2_12_2", "Dreadnought Vanguard"},
    {"C_G2_12_2", "Dreadnought Vanguard"},
    {"G2_13", "Trial of the Sekhemas"},
    {"C_G2_13", "Trial of the Sekhemas"},
    // G3 Locations
    {"G3_1", "Sandswept Marsh"},
    {"С_G3_1", "Sandswept Marsh"},
    {"G3_3", "Jungle Ruins"},
    {"С_G3_3", "Jungle Ruins"},
    {"G3_4", "The Venom Crypts"},
    {"С_G3_4", "The Venom Crypts"},
    {"G3_2_1", "Infested Barrens"},
    {"C_G3_2_1", "Infested Barrens"},
    {"G3_7", "The Azak Bog"},
    {"C_G3_7", "The Azak Bog"},
    {"G3_5", "Chimeral Wetlands"},
    {"C_G3_5", "Chimeral Wetlands"},
    {"G3_6_1", "Jiquani's Machinarium"},
    {"C_G3_6_1", "Jiquani's Machinarium"},
    {"G3_6_2", "Jiquani's Sanctum"},
    {"C_G3_6_2", "Jiquani's Sanctum"},
    {"G3_2_2", "The Matlan Waterways"},
    {"C_G3_2_2", "The Matlan Waterways"},
    {"G3_8", "The Drowned City"},
    {"C_G3_8", "The Drowned City"},
    {"G3_9", "The Molten Vault"},
    {"C_G3_9", "The Molten Vault"},
    {"G3_11", "Apex of Filth"},
    {"C_G3_11", "Apex of Filth"},
    {"G3_12", "Temple of Kopec"},
    {"C_G3_12", "Temple of Kopec"},
    {"G3_14", "Utzaal"},
    {"C_G3_14", "Utzaal"},
    {"G3_16", "Aggorat"},
    {"C_G3_16", "Aggorat"},
    {"C_G3_16_", "Aggorat"},
    {"G3_17", "The Black Chambers"},
    {"C_G3_17", "The Black Chambers"}
};

// Словарь соответствия кодов локаций списку изображений
const QMap<QString, QStringList> locationImages = []() {
    QMap<QString, QStringList> map;
    // G1 Locations
    map.insert("G1_town", QStringList{":/images/G1_town.png"}); // Clearfell Encampment
    map.insert("C_G1_town", QStringList{":/images/G1_town.png"});
    map.insert("G1_2", QStringList{":/images/G1_2_1.png", ":/images/G1_2_2.png"}); // Clearfell
    map.insert("C_G1_2", QStringList{":/images/G1_2_1.png", ":/images/G1_2_2.png"});
    map.insert("G1_3", QStringList{":/images/G1_3.png"}); // Mud Burrow
    map.insert("C_G1_3", QStringList{":/images/G1_3.png"}); //
    map.insert("G1_4", QStringList{":/images/G1_4.png"}); // Grelwood
    map.insert("C_G1_4", QStringList{":/images/G1_4.png"}); //
    map.insert("G1_5", QStringList{":/images/G1_5.png"}); // Red Vale
    map.insert("C_G1_5", QStringList{":/images/G1_5.png"}); //
    map.insert("G1_6", QStringList{":/images/G1_6.png"}); // Grim Tangle
    map.insert("C_G1_6", QStringList{":/images/G1_6.png"}); //
    map.insert("G1_7", QStringList{":/images/G1_7.png"}); // Cemetery of the Eternals
    map.insert("C_G1_7", QStringList{":/images/G1_7.png"}); //
    map.insert("G1_8", QStringList{":/images/G1_8.png"}); // Mausoleum of the Praetor
    map.insert("C_G1_8", QStringList{":/images/G1_8.png"}); //
    map.insert("G1_9", QStringList{":/images/G1_9.png"}); // Tomb of the Consort
    map.insert("C_G1_9", QStringList{":/images/G1_9.png"}); //
    map.insert("G1_11", QStringList{":/images/G1_11_1.png", ":/images/G1_11_2.png"}); // Hunting Grounds
    map.insert("C_G1_11", QStringList{":/images/G1_11_1.png", ":/images/G1_11_2.png"}); //
    map.insert("G1_12", QStringList{":/images/G1_12.png"}); // Freythorn
    map.insert("C_G1_12", QStringList{":/images/G1_12.png"}); //
    map.insert("G1_13_1", QStringList{":/images/G1_13_1_1.png", ":/images/G1_13_1_2.png"}); // Ogham Farmlands
    map.insert("C_G1_13_1", QStringList{":/images/G1_13_1_1.png", ":/images/G1_13_1_2.png"}); //
    map.insert("G1_13_2", QStringList{":/images/G1_13_2.png"}); // Ogham Village
    map.insert("C_G1_13_2", QStringList{":/images/G1_13_2.png"}); //
    map.insert("G1_14", QStringList{":/images/G1_14.png"}); // Manor Ramparts
    map.insert("C_G1_14", QStringList{":/images/G1_14.png"}); //
    map.insert("G1_15", QStringList{":/images/G1_15_1.png", ":/images/G1_15_2.png", ":/images/G1_15_3.png"}); // Ogham Manor
    map.insert("C_G1_15", QStringList{":/images/G1_15_1.png", ":/images/G1_15_2.png", ":/images/G1_15_3.png"}); //
    // G2 Locations
    map.insert("G2_1", QStringList{":/images/G2_1.png"}); // Vastiri Outskirts
    map.insert("C_G2_1", QStringList{":/images/G2_1.png"}); //
    map.insert("G2_town", QStringList{":/images/G2_town.png"}); // Arduna Caravan
    map.insert("C_G2_town", QStringList{":/images/G2_town.png"}); //
    map.insert("G2_10_1", QStringList{":/images/G2_10_1.png"}); // Mawdun Quarry
    map.insert("C_G2_10_1", QStringList{":/images/G2_10_1.png"}); //
    map.insert("G2_10_2", QStringList{":/images/G2_10_2.png"}); // Mawdun Mine
    map.insert("C_G2_10_2", QStringList{":/images/G2_10_2.png"}); //
    map.insert("G2_2", QStringList{":/images/G2_2_1.png", ":/images/G2_2_2.png"}); // Traitor’s Passage
    map.insert("C_G2_2", QStringList{":/images/G2_2_1.png", ":/images/G2_2_2.png"}); //
    map.insert("G2_3", QStringList{":/images/G2_3.png"}); // Halani Gates
    map.insert("C_G2_3", QStringList{":/images/G2_3.png"}); //
    map.insert("G2_4_1", QStringList{":/images/G2_4_1.png"}); // Keth
    map.insert("C_G2_4_1", QStringList{":/images/G2_4_1.png"}); //
    map.insert("G2_4_2", QStringList{":/images/G2_4_2_1.png"}); // Lost City
    map.insert("C_G2_4_2", QStringList{":/images/G2_4_2_1.png"}); //
    map.insert("G2_4_3", QStringList{":/images/G2_4_3.png"}); // Buried Shrines
    map.insert("C_G2_4_3", QStringList{":/images/G2_4_3.png"}); //
    map.insert("G2_5_1", QStringList{":/images/G2_5_1.png"}); // Mastodon Badlands
    map.insert("C_G2_5_1", QStringList{":/images/G2_5_1.png"}); //
    map.insert("G2_5_2", QStringList{":/images/G2_5_2.png"}); // Bone Pits
    map.insert("C_G2_5_2", QStringList{":/images/G2_5_2.png"}); //
    map.insert("G2_6", QStringList{":/images/G2_6.png"}); // Valley of the Titans
    map.insert("C_G2_6", QStringList{":/images/G2_6.png"}); //
    map.insert("G2_7", QStringList{":/images/G2_7.png"}); // Titan Grotto
    map.insert("C_G2_7", QStringList{":/images/G2_7.png"}); //
    map.insert("G2_8", QStringList{":/images/G2_8.png"}); // Deshar
    map.insert("C_G2_8", QStringList{":/images/G2_8.png"}); //
    map.insert("G2_9_1", QStringList{":/images/G2_9_1.png"}); // Path of Mourning
    map.insert("C_G2_9_1", QStringList{":/images/G2_9_1.png"}); //
    map.insert("G2_9_2", QStringList{":/images/G2_9_2.png"}); // Spires of Deshar
    map.insert("C_G2_9_2", QStringList{":/images/G2_9_2.png"}); //
    map.insert("G2_12_1", QStringList{":/images/G2_12_1.png"}); // Dreadnought
    map.insert("C_G2_12_1", QStringList{":/images/G2_12_1.png"}); //
    map.insert("G2_12_2", QStringList{":/images/G2_12_2.png"}); // Dreadnought Vanguard
    map.insert("C_G2_12_2", QStringList{":/images/G2_12_2.png"}); //
    map.insert("G2_13", QStringList{":/images/G2_13.png"}); // Trial of the Sekhemas
    map.insert("C_G2_13", QStringList{":/images/G2_13.png"}); //
    // G3 Locations
    map.insert("G3_1", QStringList{":/images/G3_1.png"}); // Sandswept Marsh
    map.insert("C_G3_1", QStringList{":/images/G3_1.png"}); //
    map.insert("G3_3", QStringList{":/images/G3_3.png"}); // Jungle Ruins
    map.insert("C_G3_3", QStringList{":/images/G3_3.png"}); //
    // map.insert("G3_4", QStringList{":/images/G3_4.png"}); // The Venom Crypts
    // map.insert("C_G3_4", QStringList{":/images/G3_4.png"}); //
    map.insert("G3_2_1", QStringList{":/images/G3_2_1.png"}); // Infested Barrens
    map.insert("C_G3_2_1", QStringList{":/images/G3_2_1.png"}); //
    map.insert("G3_7", QStringList{":/images/G3_7.png"}); // The Azak Bog
    map.insert("C_G3_7", QStringList{":/images/G3_7.png"}); //
    map.insert("G3_5", QStringList{":/images/G3_5.png"}); // Chimeral Wetlands
    map.insert("C_G3_5", QStringList{":/images/G3_5.png"}); //
    map.insert("G3_6_1", QStringList{":/images/G3_6_1.png"}); // Jiquani's Machinarium
    map.insert("C_G3_6_1", QStringList{":/images/G3_6_1.png"}); //
    map.insert("G3_6_2", QStringList{":/images/G3_6_2.png"}); // Jiquani's Sanctum
    map.insert("C_G3_6_2", QStringList{":/images/G3_6_2.png"}); //
    map.insert("G3_2_2", QStringList{":/images/G3_2_2.png"}); // The Matlan Waterways
    map.insert("C_G3_2_2", QStringList{":/images/G3_2_2.png"}); //
    map.insert("G3_8", QStringList{":/images/G3_8.png"}); // The Drowned City
    map.insert("C_G3_8", QStringList{":/images/G3_8.png"}); //
    // map.insert("G3_9", QStringList{":/images/G3_9.png"}); // The Molten Vault
    // map.insert("C_G3_9", QStringList{":/images/G3_9.png"}); //
    map.insert("G3_11", QStringList{":/images/G3_11_1.png", ":/images/G3_11_2.png"}); // Apex of Filth
    map.insert("C_G3_11", QStringList{":/images/G3_11_1.png", ":/images/G3_11_2.png"}); //
    map.insert("G3_12", QStringList{":/images/G3_12.png"}); // Temple of Kopec
    map.insert("C_G3_12", QStringList{":/images/G3_12.png"}); //
    map.insert("G3_14", QStringList{":/images/G3_14.png"}); // Utzaal
    map.insert("C_G3_14", QStringList{":/images/G3_14.png"}); //
    map.insert("G3_16", QStringList{":/images/G3_16.png"}); // Aggorat
    map.insert("C_G3_16", QStringList{":/images/G3_16.png"}); //
    map.insert("C_G3_16_", QStringList{":/images/G3_16.png"}); //
    map.insert("G3_17", QStringList{":/images/G3_17.png"}); // The Black Chambers
    map.insert("C_G3_17", QStringList{":/images/G3_17.png"}); //

    return map;
}();


#endif // LOCATIONS_H
