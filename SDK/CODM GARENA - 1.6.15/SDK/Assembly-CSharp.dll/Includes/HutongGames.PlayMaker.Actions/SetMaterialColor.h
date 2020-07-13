#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMaterialColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMaterialColor"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& materialIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& namedColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMaterialColor*))(Il2CppBase() + 0x50289A8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMaterialColor*))(Il2CppBase() + 0x5028A8C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetMaterialColor*))(Il2CppBase() + 0x5028F50))(this);
	}
	template <typename T = void> T DoSetMaterialColor() {
		return ((T (*)(SetMaterialColor*))(Il2CppBase() + 0x5028AB8))(this);
	}

};

}
