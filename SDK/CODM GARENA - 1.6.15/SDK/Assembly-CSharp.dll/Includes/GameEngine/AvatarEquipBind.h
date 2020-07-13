#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarEquipBind
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarEquipBind"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BindBones() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boneNames() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppVector3> T GetTPos() {
		return ((T (*)(AvatarEquipBind*))(Il2CppBase() + 0x35FF090))(this);
	}
	template <typename T = void> T Reset(uintptr_t inObj, Il2CppArray<uintptr_t>* inBindBones) {
		return ((T (*)(AvatarEquipBind*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FF0A4))(this, inObj, inBindBones);
	}
	template <typename T = void> T UpdatePos() {
		return ((T (*)(AvatarEquipBind*))(Il2CppBase() + 0x35FF0AC))(this);
	}
	template <typename T = bool> T get_enable() {
		return ((T (*)(AvatarEquipBind*))(Il2CppBase() + 0x35FF0B4))(this);
	}
	template <typename T = void> T set_enable(bool value) {
		return ((T (*)(AvatarEquipBind*, bool))(Il2CppBase() + 0x35FF0BC))(this, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(AvatarEquipBind*))(Il2CppBase() + 0x35FF0C4))(this);
	}

};

}
