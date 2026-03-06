target_sources(251003_app_lib
	PRIVATE 
		io.cpp
		sortings.cpp
	PUBLIC 
		io.hpp
		sortings.hpp
)

target_include_directories(251003_app_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)