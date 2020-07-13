#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCallList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCallList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PersistentCalls() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RuntimeCalls() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExecutingCalls() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_NeedsUpdate() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T AddPersistentInvokableCall(uintptr_t call) {
		return ((T (*)(InvokableCallList*, uintptr_t))(Il2CppBase() + 0x4DAA9E0))(this, call);
	}
	template <typename T = void> T AddListener(uintptr_t call) {
		return ((T (*)(InvokableCallList*, uintptr_t))(Il2CppBase() + 0x4DAAA88))(this, call);
	}
	template <typename T = void> T RemoveListener(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCallList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAAB30))(this, targetObj, method);
	}
	template <typename T = void> T ClearPersistent() {
		return ((T (*)(InvokableCallList*))(Il2CppBase() + 0x4DAAD84))(this);
	}
	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(InvokableCallList*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DAAE24))(this, parameters);
	}

};

}
