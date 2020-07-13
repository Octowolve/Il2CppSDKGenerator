#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class ScriptPlayable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "ScriptPlayable"));
	}


	template <typename T = void> T OnGraphStart() {
		return ((T (*)(ScriptPlayable*))(Il2CppBase() + 0x4DB2434))(this);
	}
	template <typename T = void> T OnGraphStop() {
		return ((T (*)(ScriptPlayable*))(Il2CppBase() + 0x4DB2438))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ScriptPlayable*))(Il2CppBase() + 0x4DB243C))(this);
	}
	template <typename T = void> T PrepareFrame(uintptr_t info) {
		return ((T (*)(ScriptPlayable*, uintptr_t))(Il2CppBase() + 0x4DB2440))(this, info);
	}
	template <typename T = void> T ProcessFrame(uintptr_t info, uintptr_t playerData) {
		return ((T (*)(ScriptPlayable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB2444))(this, info, playerData);
	}
	template <typename T = void> T OnPlayStateChanged(uintptr_t info, uintptr_t newState) {
		return ((T (*)(ScriptPlayable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB2448))(this, info, newState);
	}

};

}
