CC = mipsel-linux-gcc
CPP = mipsel-linux-g++
STRIP = mipsel-linux-strip

#CC = gcc
#CPP = g++
#STRIP = strip

LDFLAGS = 
OBJ       = object.linux/tesc_seleccion_idioma.o object.linux/profanation.o object.linux/TSprVerticalFlip.o object.linux/TSprFlecha.o object.linux/TSprGota.o object.linux/TSprHorizontal.o object.linux/TSprHorizontalConFlip.o object.linux/TSprJohny.o object.linux/TSprPelotaBota.o object.linux/TSprRoca.o object.linux/TSprSeleccion.o object.linux/TSprTesoro.o object.linux/TSprVertical.o object.linux/ma_core.o object.linux/tmabitmap.o object.linux/tmafont.o object.linux/tmagame.o object.linux/tmaimagebank.o object.linux/tmaogg.o object.linux/tmasound.o object.linux/tmasprite.o object.linux/tmafilereader.o object.linux/tmamessage.o object.linux/tmarandom.o object.linux/tmarectangle.o object.linux/tmastring.o object.linux/tmavector.o object.linux/mapas.o object.linux/tesc_juego.o object.linux/TSpriteEnemigo.o object.linux/tmainputcontroller.o
LINKOBJ   = "object.linux/tesc_seleccion_idioma.o" "object.linux/profanation.o" "object.linux/TSprVerticalFlip.o" "object.linux/TSprFlecha.o" "object.linux/TSprGota.o" "object.linux/TSprHorizontal.o" "object.linux/TSprHorizontalConFlip.o" "object.linux/TSprJohny.o" "object.linux/TSprPelotaBota.o" "object.linux/TSprRoca.o" "object.linux/TSprSeleccion.o" "object.linux/TSprTesoro.o" "object.linux/TSprVertical.o" "object.linux/ma_core.o" "object.linux/tmabitmap.o" "object.linux/tmafont.o" "object.linux/tmagame.o" "object.linux/tmaimagebank.o" "object.linux/tmaogg.o" "object.linux/tmasound.o" "object.linux/tmasprite.o" "object.linux/tmafilereader.o" "object.linux/tmamessage.o" "object.linux/tmarandom.o" "object.linux/tmarectangle.o" "object.linux/tmastring.o" "object.linux/tmavector.o" "object.linux/mapas.o" "object.linux/tesc_juego.o" "object.linux/TSpriteEnemigo.o" "object.linux/tmainputcontroller.o" 
LIBS = -lSDL -lSDL_image -lSDL_gfx -lSDL_mixer
BIN  = profanation
CXXFLAGS = -O2 -Wall -DLINUX
CFLAGS = -O2 -Wall -DLINUX
RM = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before profanation all-after


clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LDFLAGS) $(LINKOBJ) -o "profanation" $(LIBS)

object.linux/tesc_seleccion_idioma.o: $(GLOBALDEPS) src/escenas/tesc_seleccion_idioma.cpp src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h
	$(CPP) -c src/escenas/tesc_seleccion_idioma.cpp -o object.linux/tesc_seleccion_idioma.o $(CXXFLAGS)

object.linux/profanation.o: $(GLOBALDEPS) src/main/profanation.cpp src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h
	$(CPP) -c src/main/profanation.cpp -o object.linux/profanation.o $(CXXFLAGS)

object.linux/TSprVerticalFlip.o: $(GLOBALDEPS) src/sprites/TSprVerticalFlip.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprVerticalFlip.cpp -o object.linux/TSprVerticalFlip.o $(CXXFLAGS)

object.linux/TSprFlecha.o: $(GLOBALDEPS) src/sprites/TSprFlecha.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprFlecha.cpp -o object.linux/TSprFlecha.o $(CXXFLAGS)

object.linux/TSprGota.o: $(GLOBALDEPS) src/sprites/TSprGota.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprGota.cpp -o object.linux/TSprGota.o $(CXXFLAGS)

object.linux/TSprHorizontal.o: $(GLOBALDEPS) src/sprites/TSprHorizontal.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprHorizontal.cpp -o object.linux/TSprHorizontal.o $(CXXFLAGS)

object.linux/TSprHorizontalConFlip.o: $(GLOBALDEPS) src/sprites/TSprHorizontalConFlip.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprHorizontalConFlip.cpp -o object.linux/TSprHorizontalConFlip.o $(CXXFLAGS)

object.linux/TSprJohny.o: $(GLOBALDEPS) src/sprites/TSprJohny.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprJohny.cpp -o object.linux/TSprJohny.o $(CXXFLAGS)

object.linux/TSprPelotaBota.o: $(GLOBALDEPS) src/sprites/TSprPelotaBota.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprPelotaBota.cpp -o object.linux/TSprPelotaBota.o $(CXXFLAGS)

object.linux/TSprRoca.o: $(GLOBALDEPS) src/sprites/TSprRoca.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprRoca.cpp -o object.linux/TSprRoca.o $(CXXFLAGS)

object.linux/TSprSeleccion.o: $(GLOBALDEPS) src/sprites/TSprSeleccion.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprSeleccion.cpp -o object.linux/TSprSeleccion.o $(CXXFLAGS)

object.linux/TSprTesoro.o: $(GLOBALDEPS) src/sprites/TSprTesoro.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprTesoro.cpp -o object.linux/TSprTesoro.o $(CXXFLAGS)

object.linux/TSprVertical.o: $(GLOBALDEPS) src/sprites/TSprVertical.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSprVertical.cpp -o object.linux/TSprVertical.o $(CXXFLAGS)

object.linux/ma_core.o: $(GLOBALDEPS) src/ma-sdl/ma_core.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/ma_core.cpp -o object.linux/ma_core.o $(CXXFLAGS)

object.linux/tmabitmap.o: $(GLOBALDEPS) src/ma-sdl/tmabitmap.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmabitmap.cpp -o object.linux/tmabitmap.o $(CXXFLAGS)

object.linux/tmafont.o: $(GLOBALDEPS) src/ma-sdl/tmafont.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmafont.cpp -o object.linux/tmafont.o $(CXXFLAGS)

object.linux/tmagame.o: $(GLOBALDEPS) src/ma-sdl/tmagame.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmagame.cpp -o object.linux/tmagame.o $(CXXFLAGS)

object.linux/tmaimagebank.o: $(GLOBALDEPS) src/ma-sdl/tmaimagebank.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h
	$(CPP) -c src/ma-sdl/tmaimagebank.cpp -o object.linux/tmaimagebank.o $(CXXFLAGS)

object.linux/tmaogg.o: $(GLOBALDEPS) src/ma-sdl/tmaogg.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmaogg.cpp -o object.linux/tmaogg.o $(CXXFLAGS)

object.linux/tmasound.o: $(GLOBALDEPS) src/ma-sdl/tmasound.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmasound.cpp -o object.linux/tmasound.o $(CXXFLAGS)

object.linux/tmasprite.o: $(GLOBALDEPS) src/ma-sdl/tmasprite.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmasprite.cpp -o object.linux/tmasprite.o $(CXXFLAGS)

object.linux/tmafilereader.o: $(GLOBALDEPS) src/ma-sdl/utils/tmafilereader.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/utils/tmafilereader.cpp -o object.linux/tmafilereader.o $(CXXFLAGS)

object.linux/tmamessage.o: $(GLOBALDEPS) src/ma-sdl/utils/tmamessage.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/utils/tmamessage.cpp -o object.linux/tmamessage.o $(CXXFLAGS)

object.linux/tmarandom.o: $(GLOBALDEPS) src/ma-sdl/utils/tmarandom.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/utils/tmarandom.cpp -o object.linux/tmarandom.o $(CXXFLAGS)

object.linux/tmarectangle.o: $(GLOBALDEPS) src/ma-sdl/utils/tmarectangle.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h
	$(CPP) -c src/ma-sdl/utils/tmarectangle.cpp -o object.linux/tmarectangle.o $(CXXFLAGS)

object.linux/tmastring.o: $(GLOBALDEPS) src/ma-sdl/utils/tmastring.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/utils/tmastring.cpp -o object.linux/tmastring.o $(CXXFLAGS)

object.linux/tmavector.o: $(GLOBALDEPS) src/ma-sdl/utils/tmavector.cpp src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/utils/tmavector.cpp -o object.linux/tmavector.o $(CXXFLAGS)

object.linux/mapas.o: $(GLOBALDEPS) src/ma-sdl/maps/mapas.cpp src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h
	$(CPP) -c src/ma-sdl/maps/mapas.cpp -o object.linux/mapas.o $(CXXFLAGS)

object.linux/tesc_juego.o: $(GLOBALDEPS) src/escenas/tesc_juego.cpp src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/escenas/idioma.h src/escenas/enemigos.h
	$(CPP) -c src/escenas/tesc_juego.cpp -o object.linux/tesc_juego.o $(CXXFLAGS)

object.linux/TSpriteEnemigo.o: $(GLOBALDEPS) src/sprites/TSpriteEnemigo.cpp src/sprites/sprites.h src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h src/ma-sdl/maps/mapas.h src/ma-sdl/ma_classes.h src/ma-sdl/utils/utils.h src/escenas/escenarios.h src/main/profanation.h src/ma-sdl/ma_classes.h src/ma-sdl/maps/mapas.h src/sprites/sprites.h
	$(CPP) -c src/sprites/TSpriteEnemigo.cpp -o object.linux/TSpriteEnemigo.o $(CXXFLAGS)

object.linux/tmainputcontroller.o: $(GLOBALDEPS) src/ma-sdl/tmainputcontroller.cpp src/ma-sdl/ma_classes.h src/ma-sdl/ma_object.h src/ma-sdl/utils/utils.h src/ma-sdl/ma_object.h
	$(CPP) -c src/ma-sdl/tmainputcontroller.cpp -o object.linux/tmainputcontroller.o $(CXXFLAGS)
