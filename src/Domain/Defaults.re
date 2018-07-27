open Models;

let createSkill = name => {
  name,
  title: name,
  attribute: Magical,
  stat: Strength,
  boughtFrom: RacialPackage,
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
  createSkill("Fishing"),
  createSkill("WS"),
  createSkill("BS"),
  createSkill("Defense"),
  createSkill("Magic"),
  createSkill("Climbing"),
  createSkill("Running"),
  createSkill("Rope Use"),
|];