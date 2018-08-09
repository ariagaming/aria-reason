type name = string;
type attributeType =
  | Magical
  | Physical
  | Mental;
type statisticType =
  | Strength
  | Agility
  | Intuition
  | Perception
  | NoStat;
type source =
  | RacialPackage
  | ProfessionalPackage
  | XP
  | Gift
  | NoSource;

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

type statistic = {
  name,
  stat: statisticType,
  base: int,
  race: int,
  profession: int,
  equipment: int,
  bonus: int,
  total: int,
  calculated: int,
};
type statistics = {
  str: statistic,
  agi: statistic,
  inu: statistic,
  per: statistic,
};

type feature = {
  name: string,
  title: string,
  base: int,
  race: int,
  profession: int,
  equipment: int,
  bonus: int,
  total: int,
  calculated: float,
  prefix: string,
  postfix: string,
  factor: float,
};
type features = array(feature);

type learnable = {
  name,
  title: string,
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
type resistance = learnable;
type resistances = array(resistance);

type profession = learnable;
type professions = array(profession);

type language = learnable;
type languages = array(language);

type weapon = {
  name,
  title: string,
  numberOfDice: int,
  diceSides: int,
  constant: int,
};
type weapons = array(weapon);

type equipment = {
  name,
  title: string,
  description: string,
  location: string,
};
type equipments = array(equipment);

type special = {
  name,
  title: string,
  description: string,
};
type specials = array(special);
type character = {
  name,
  statistics,
  skills,
  resistances,
  languages,
  professions,
  features,
  weapons,
  specials,
  equipments,
};