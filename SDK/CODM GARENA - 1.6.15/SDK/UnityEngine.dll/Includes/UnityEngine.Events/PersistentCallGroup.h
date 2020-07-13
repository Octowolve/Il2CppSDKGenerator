#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class PersistentCallGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "PersistentCallGroup"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Calls() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PersistentCallGroup*))(Il2CppBase() + 0x4DABDE8))(this);
	}
	template <typename T = void> T Initialize(uintptr_t invokableList, uintptr_t unityEventBase) {
		return ((T (*)(PersistentCallGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DABE80))(this, invokableList, unityEventBase);
	}

};

}
