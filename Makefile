.PHONY: clean All

All:
	@echo "----------Building project:[ toggle_menu_items - Debug ]----------"
	@cd "toggle_menu_items" && "$(MAKE)" -f  "toggle_menu_items.mk"
clean:
	@echo "----------Cleaning project:[ toggle_menu_items - Debug ]----------"
	@cd "toggle_menu_items" && "$(MAKE)" -f  "toggle_menu_items.mk" clean
