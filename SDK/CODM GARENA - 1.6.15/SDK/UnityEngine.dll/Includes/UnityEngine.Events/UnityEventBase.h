#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEventBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEventBase"));
	}

	template <typename T = uintptr_t> T& m_Calls() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PersistentCalls() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_TypeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_CallsDirty() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DAC76C))(this);
	}
	template <typename T = void> T UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DAC770))(this);
	}
	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEventBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEventBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, target, theFunction);
	}
	template <typename T = uintptr_t> T FindMethod(uintptr_t call) {
		return ((T (*)(UnityEventBase*, uintptr_t))(Il2CppBase() + 0x4DAB47C))(this, call);
	}
	template <typename T = uintptr_t> T FindMethod_1(Il2CppString* name, uintptr_t listener, uintptr_t mode, uintptr_t argumentType) {
		return ((T (*)(UnityEventBase*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAC7EC))(this, name, listener, mode, argumentType);
	}
	template <typename T = int32_t> T GetPersistentEventCount() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DACBC8))(this);
	}
	template <typename T = void> T DirtyPersistentCalls() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DAC7B8))(this);
	}
	template <typename T = void> T RebuildPersistentCallsIfNeeded() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DACBF0))(this);
	}
	template <typename T = void> T AddCall(uintptr_t call) {
		return ((T (*)(UnityEventBase*, uintptr_t))(Il2CppBase() + 0x4DAC2FC))(this, call);
	}
	template <typename T = void> T RemoveListener(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(UnityEventBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAC37C))(this, targetObj, method);
	}
	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(UnityEventBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DAC734))(this, parameters);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UnityEventBase*))(Il2CppBase() + 0x4DACC38))(this);
	}
	template <typename T = uintptr_t> static T GetValidMethodInfo(uintptr_t obj, Il2CppString* functionName, Il2CppArray<uintptr_t>* argumentTypes) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DAC450))(0, obj, functionName, argumentTypes);
	}

};

}
