#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ILevelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ILevelConfig"));
	}


	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Level_exp() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Level_time() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Level_feedback_sound() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LevelType() {
		return ((T (*)(ILevelConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}
