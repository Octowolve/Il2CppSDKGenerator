#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CallMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CallMethod"));
	}

	template <typename T = uintptr_t> T& behaviour() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& methodName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parameters() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& manualUI() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& cachedBehaviour() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& cachedMethodName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& cachedType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& cachedMethodInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedParameterInfo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parametersArray() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& errorString() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36334))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F3634C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36880))(this);
	}
	template <typename T = void> T DoMethodCall() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F3641C))(this);
	}
	template <typename T = bool> T NeedToUpdateCache() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36884))(this);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36F64))(this);
	}
	template <typename T = bool> T DoCache() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36AFC))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(CallMethod*))(Il2CppBase() + 0x4F36F7C))(this);
	}

};

}
