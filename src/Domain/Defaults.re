open Models;

let createSkill = (name: string) : skill => {
  name,
  title: name,
  attribute: Magical,
  stat: Strength,
  boughtFrom: RacialPackage,
  boughtXP: 0,
  expertiseFrom: ProfessionalPackage,
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

type creator('a) = string => 'a;

let createLearnable: creator(learnable) =
  name => {
    name,
    title: name,
    boughtFrom: RacialPackage,
    boughtXP: 0,
    expertiseFrom: ProfessionalPackage,
    expertiseXP: 0,
    base: 0,
    race: 0,
    profession: 0,
    equipment: 0,
    bonus: 0,
    total: 0,
  };

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