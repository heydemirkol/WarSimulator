<p align="center">
  <img src="../assets/gifs/Style.gif" alt="Style" width="90%"/>
</p>

---

# ► **DESCRIPTION**

This project uses the following C++ naming conventions to ensure consistency, improve readability, and make the codebase easier to understand and maintain.

---

# ► **VARIABLES**

## **GLOBAL VARIABLES**

```terminal
int playerCount = 0;
long game = 0;
int choice;
int amount;
```

**Style:** `myFriend`

---

## **LOCAL VARIABLES**

```terminal
int currentHealth = 0;
float movementSpeed = 0.0f;
int speed = 0;
```

**Style:** `myFriend`

---

## **CLASS PUBLIC VARIABLES**

```terminal
class Player {
public:
    int currentStamina;
    int currentHealth;
    long speed;
    long long damage;
};
```

**Style:** `myFriend`

---

## **CLASS PRIVATE VARIABLES**

```terminal
class Player {
private:
    int health_;
    int water_;
    long speed_;
    float stop_;
};
```

**Style:** `myFriend_`

---

## **CLASS PROTECTED VARIABLES

```terminal
class Player {
protected:
    int stamina_;
    int max_;
    long speed_;
    long long myHealth_;
}
```

**Style:** `myFriend_`;

---

## **STATIC VARIABLES**

```terminal
static int totalPlayers = 0;
static long long friends = 0;
static long long players = 0;
static float speed = 0;
```

**Style:** `myFriend`

---

## **BOOLEAN VARIABLES**

```terminal
bool isAlive = true;
bool hasWeapon = false;
bool canJump = true;
```

**Style:** `myFriend`

---

# ► **FUNCTIONS & METHODS**

```terminal
void calculateDamage();
void calculateSpeed();

int getHealth();
int getDamage();

short int getCarCount();

void setHealth(int health);
void setSpeed(float speed);
void setDamage(long long damage);
void setStamina(long long stamina);
````

**Style:** `myFriend`

---

# ► **CLASSES**

## **CLASS DECLARATION**

```terminal
class PlayerManager
class PlayerClass
class Player
class Company
class Game
```

**Style:** `MyFriend`

---

## **CLASS STRUCTURE**

```terminal
class Player {
protected:
    int okey_;
    int stat_;

private:
    short int no_;
    int hello_;
    int yes_;
    long long heydemirkol_;

public:
    Player();

    int getHello() const;
    int getYes() const;
    int getDemirkol() const;

    void addHello(int amount);
    void addYes(int amount);
    void addDemirkol(int amount);
};
```

---

## **CLASS INHERITANCE**

```
class Enemy : public Character
```

---

# ► **STRUCTS**

## **STRUCT DECLARATION**

```terminal
struct PlayerData
struct Player
struct GameData
```

**Style:** `MyFriend`

---

## **STRUCT STRUCTURE**

```terminal
struct PlayerData {
    int health;
    int armor;
    float speed;
    long damage;
};
```

---

# ► **POINTERS & REFERENCES**

## **POINTERS**

```terminal
int* ptr = nullptr;
int* helloPointer = nullptr;

int value = 10;
ptr = &value;
helloPointer = &value;
```

**Style:** `myFriend`

---

# ► **REFERENCES**

```terminal
int value = 10;
int value2 = 50;

int& ref = value;
int& ref2 = value2;
```

**Style:** `myFriend`

---

# ► **ENUMS**

```terminal
enum class GameState
```

**Style:** `MyFriend`

---

# ► **NAMESPACES**

```terminal
namespace Engine
```

**Style:** `MyFriend`

---


# ► **FORMATTING**

```terminal
if (hello == 1 && getSpeed() >= 20 && getHealth() >= 30) {
    updateSpeed(); 
    updateHealth();
}

else if (hello == 2) break;
else if (hello == 3) getDamage();
else std::cout << "Invalid Selection\n" << "\n";
```

---

## This document does not cover all C++ topics. 
## For topics not included here, the same structure and consistency will generally be maintained. 😁​😁​
