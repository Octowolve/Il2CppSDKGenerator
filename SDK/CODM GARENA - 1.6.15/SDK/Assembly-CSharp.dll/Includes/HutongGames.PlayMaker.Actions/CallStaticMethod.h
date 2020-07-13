#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CallStaticMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CallStaticMethod"));
	}

	template <typename T = uintptr_t> T& className() {
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
	template <typename T = uintptr_t> T& cachedType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& cachedClassName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& cachedMethodName() {
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

	template <typename T = void> T OnEnter() {
		return ((T (*)(CallStaticMethod*))(Il2CppBase() + 0x4F37898))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CallStaticMethod*))(Il2CppBase() + 0x4F37CE4))(this);
	}
	template <typename T = void> T DoMethodCall() {
		return ((T (*)(CallStaticMethod*))(Il2CppBase() + 0x4F37968))(this);
	}
	template <typename T = bool> T DoCache() {
		return ((T (*)(CallStaticMethod*))(Il2CppBase() + 0x4F37CE8))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(CallStaticMethod*))(Il2CppBase() + 0x4F38078))(this);
	}

};

}
