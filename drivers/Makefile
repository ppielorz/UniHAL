COVERAGE_DIR = coverage
COVERAGE_INFO = $(COVERAGE_DIR)/drivers_coverage.info
DRIVERS_DIRS := $(wildcard *)
DRIVERS_DIRS := $(filter-out Makefile $(COVERAGE_DIR), $(DRIVERS_DIRS))
DRIVERS_DIRS_CLEAN := $(patsubst %,%_clean,$(DRIVERS_DIRS))

all: $(DRIVERS_DIRS) coverage

.PHONY: $(DRIVERS_DIRS) coverage

$(DRIVERS_DIRS):
	@echo "Make $@"
	$(MAKE) -C $@/tests

coverage:
	mkdir -p $(COVERAGE_DIR)
	lcov --capture $(foreach dir, $(DRIVERS_DIRS), --directory $(wildcard $(dir)/tests/objs)) -output-file $(COVERAGE_INFO)
	genhtml $(COVERAGE_INFO) --output-directory $(COVERAGE_DIR)

clean: $(DRIVERS_DIRS_CLEAN)
	@echo "Clean"
	rm -rf coverage

$(DRIVERS_DIRS_CLEAN):
	$(MAKE) -C $(subst _clean,,$@)/tests clean
