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

type character = {
  name,
  statistics,
  skills,
};