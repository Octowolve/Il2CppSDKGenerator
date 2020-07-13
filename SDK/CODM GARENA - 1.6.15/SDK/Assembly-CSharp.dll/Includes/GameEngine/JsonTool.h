#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class JsonTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "JsonTool"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CreateJsonSerializer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T CreateJsonSerializer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2478F48))(0);
	}
	template <typename T = Il2CppString*> static T Serialize(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2478760))(0, value);
	}
	template <typename T = uintptr_t> static T Deserialize(Il2CppString* value, Il2CppString* logPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3351E5C))(0, value, logPath);
	}
	template <typename T = uintptr_t> static T LoadFromFile(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x335256C))(0, path);
	}

};

}
