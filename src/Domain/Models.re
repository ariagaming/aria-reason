type name = string;
type attributeType =
  | Magical
  | Physical
  | Mental;
type statisticType =
  | Strength
  | Agility
  | Intuition
  | Perception;
type source =
  | RacialPackage
  | ProfessionalPackage
  | XP
  | Gift
  | None;

type skill = {
  name,
  title: string,
  attribute: attributeType,
  stat: statisticType,
  boughtFrom: source,
  boughtXP: int,
  expertiseFrom: source,
  expertiseXP: int,
  base: int,
  race: int,
  profession: int,
  equipment: int,
  bonus: int,
  total: int,
};
type skills = array(skill);

type statistic = {name};
type statistics = {
  str: statistic,
  agi: statistic,
  inu: statistic,
  per: statistic,
};

type learnable = {
  name,
  title: string,
  boughtFrom: source,
  boughtXP: int,
  expertiseFrom: source,
  expertiseXP: int,
  base: int,
  race: int,
  profession: int,
  equipment: int,
  bonus: int,
  total: int,
};
type resistance = learnable;
type resistances = array(resistance);

type profession = learnable;
type professions = array(profession);

type language = learnable;
type languages = array(language);

type character = {
  name,
  statistics,
  skills,
  resistances,
};