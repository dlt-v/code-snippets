class Player:
    def __init__(self, ID, name, teamName):
        self.ID = ID
        self.name = name
        self.teamName = teamName

class Team:
    def __init__(self, name):
        self.name = name
        self.players = []

    def addPlayer(self, player):
        self.players.append(player)

    def getNumberOfPlayers(self):
        return len(self.players)

class School:
    def __init__(self, name):
        self.teams = []
        self.name = name

    def addTeam(self, team):
        self.teams.append(team)

    def getTotalPlayersInSchool(self):
        total = 0
        for team in self.teams:
            total += team.getNumberOfPlayers()
        return total

Harris = Player(1, 'Harris', 'Red')
Carol = Player(2, 'Carol', 'Red')
Johny = Player(1, 'Johny', 'Blue')
Sarah = Player(2, 'Sarah', 'Blue')

red_team = Team('Red')
red_team.addPlayer(Harris)
red_team.addPlayer(Carol)
blue_team = Team('Blue')
blue_team.addPlayer(Johny)
blue_team.addPlayer(Sarah)

school = School('Sport School')
school.addTeam(red_team)
school.addTeam(blue_team)

print(school.getTotalPlayersInSchool())