include cfg.mak

all: $(DIST) $(OBJ) $(DIST)/$(EXE)
	@echo Compilado!

$(DIST):
	@echo Criando diretório $(DIST) ...
	@mkdir $(DIST)

$(OBJ):
	@echo Criando diretório $(OBJ) ...
	@mkdir $(OBJ)

$(DIST)/$(EXE): $(OBJS)
	@echo Compilando $(EXE)...
	@gcc $(OBJS) -o $(DIST)/$(EXE)

$(OBJ)/%.o: $(SRC)/%.c
	@echo Compilando $< ...
	@gcc -c $< -I ./$(INC) -o $@

clean:
	@echo Limpando...
	@rm -rf $(OBJ)/*.o $(DIST)/$(EXE)

remake: clean all