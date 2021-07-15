.PHONY: clean All

All:
	@echo "----------Building project:[ resizing_tutorial - Debug ]----------"
	@cd "resizing_tutorial" && "$(MAKE)" -f  "resizing_tutorial.mk"
clean:
	@echo "----------Cleaning project:[ resizing_tutorial - Debug ]----------"
	@cd "resizing_tutorial" && "$(MAKE)" -f  "resizing_tutorial.mk" clean
