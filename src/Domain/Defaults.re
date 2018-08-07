open Models;

let createSkill = (name: string) : skill => {
  name,
  title: name,
  attribute: Magical,
  stat: Strength,
  boughtFrom: None,
  boughtXP: 0,
  expertiseFrom: None,
  expertiseXP: 0,
  base: 0,
  race: 0,
  profession: 0,
  equipment: 0,
  bonus: 0,
  total: 0,
};
let skills: array(skill) = [|
  createSkill("Acrobatics"),
  createSkill("Animal Handler"),
  createSkill("Arcane Lore"),
  createSkill("Herbalism"),
  createSkill("History"),
  createSkill("Politics"),
  createSkill("Law"),
  createSkill("Fishing"),
  createSkill("Medicine"),
  createSkill("Stealth"),
  createSkill("Investigate"),
  createSkill("Interrogate"),
  createSkill("Persuasion"),
  createSkill("Wilderness Surv."),
  createSkill("Rope use"),
  createSkill("Defense"),
  createSkill("Weapon Skill"),
  createSkill("Ballistic Skill"),
  createSkill("Magic"),
  createSkill("Religion"),
|];

let createFeature = (name: string) : feature => {
  name,
  title: name,
  base: 0,
  race: 0,
  profession: 0,
  equipment: 0,
  bonus: 0,
  total: 0,
  calculated: 0.0,
  prefix: "",
  postfix: "",
  factor: 0.0,
};

type creator('a) = string => 'a;

let createLearnable: creator(learnable) =
  name => {
    name,
    title: name,
    stat: None,
    boughtFrom: None,
    boughtXP: 0,
    expertiseFrom: None,
    expertiseXP: 0,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
  };

let statistics = {
  str: {
    name: "Strength",
    stat: Strength,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
    calculated: 0,
  },
  agi: {
    name: "Agility",
    stat: Agility,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
    calculated: 0,
  },
  inu: {
    name: "Intuition",
    stat: Intuition,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
    calculated: 0,
  },
  per: {
    name: "Perception",
    stat: Perception,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
    calculated: 0,
  },
};

let languages: languages = [|createLearnable("Common")|];

let resistances: array(resistance) = [|
  createLearnable("Fire & Heat"),
  createLearnable("Cold & Ice"),
  createLearnable("Poison & Disease"),
  createLearnable("Holy"),
  createLearnable("Mental"),
  createLearnable("Demonic"),
  createLearnable("Necromantic"),
|];

let professions: array(profession) = [|
  createLearnable("Merchante"),
  createLearnable("Sailor"),
  createLearnable("Armorer"),
  createLearnable("Medic"),
  createLearnable("Lawyer"),
  createLearnable("Agent"),
  createLearnable("Stagehand"),
  createLearnable("Miner"),
  createLearnable("Researcher"),
  createLearnable("Apothecary"),
  createLearnable("Fletcher"),
  createLearnable("Tanner"),
|];

let features: features = [|
  createFeature("Expertise"),
  createFeature("WS Expertise"),
  createFeature("BS Expertise"),
  createFeature("Def Expertise"),
  createFeature("Magic Expertise"),
  createFeature("Dmg. Adj."),
  createFeature("Crit"),
  createFeature("Crit DMG"),
  createFeature("Splash"),
  createFeature("Extra Attack"),
  createFeature("Toughness"),
  createFeature("Aura"),
  createFeature("Stamina"),
  createFeature("Recuperate"),
  createFeature("Break Armor"),
  createFeature("Unbrakable"),
  createFeature("Movement"),
  createFeature("Initiative"),
  createFeature("Directed Strike"),
|];

let weapons: weapons = [|
  {
    name: "Dagger",
    title: "Dagger",
    numberOfDice: 1,
    diceSides: 4,
    constant: 0,
  },
|];

let character = {
  name: "Peter Pan",
  statistics,
  professions,
  resistances,
  skills,
  features,
  languages,
  weapons,
  specials: [||],
};