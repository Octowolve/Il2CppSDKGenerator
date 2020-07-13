#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGAIPawnProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGAIPawnProperty"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpecialProperty() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& PropertyConfigCenter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MeshID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Mesh2ID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DependentAssetList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& AvatarType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshIDFromAvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToAIPawnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_PropertyConfigCenter() {
		return ((T (*)(SGAIPawnProperty*))(Il2CppBase() + 0x395D50C))(this);
	}
	template <typename T = void> T set_PropertyConfigCenter(uintptr_t value) {
		return ((T (*)(SGAIPawnProperty*, uintptr_t))(Il2CppBase() + 0x395D514))(this, value);
	}
	template <typename T = uintptr_t> T get_MeshID() {
		return ((T (*)(SGAIPawnProperty*))(Il2CppBase() + 0x395D51C))(this);
	}
	template <typename T = void> T set_MeshID(uintptr_t value) {
		return ((T (*)(SGAIPawnProperty*, uintptr_t))(Il2CppBase() + 0x395D5D8))(this, value);
	}
	template <typename T = uintptr_t> T get_Mesh2ID() {
		return ((T (*)(SGAIPawnProperty*))(Il2CppBase() + 0x395D5E0))(this);
	}
	template <typename T = void> T set_Mesh2ID(uintptr_t value) {
		return ((T (*)(SGAIPawnProperty*, uintptr_t))(Il2CppBase() + 0x395D5E8))(this, value);
	}
	template <typename T = uintptr_t> T GetMeshIDFromAvatarType(uintptr_t avatarType) {
		return ((T (*)(SGAIPawnProperty*, uintptr_t))(Il2CppBase() + 0x395D524))(this, avatarType);
	}
	template <typename T = uintptr_t> T ToAIPawnData() {
		return ((T (*)(SGAIPawnProperty*))(Il2CppBase() + 0x395D5F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ToAIPawnData() {
		return ((T (*)(SGAIPawnProperty*))(Il2CppBase() + 0x395D740))(this);
	}

};

}
