#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CommonAvatarParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CommonAvatarParameter"));
	}

	template <typename T = uintptr_t> T& commonAvatarType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& commonAvatarId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& avatarSkinId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& needAutoRotate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& roleHatId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& roleBagId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& roleClothId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& roleSuitId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& roleHatAssetId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& roleBagAssetId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& roleClothAssetId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& roleAction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& roleEuler() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_commonAvatarType() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x2928374))(this);
	}
	template <typename T = void> T set_commonAvatarType(uintptr_t value) {
		return ((T (*)(CommonAvatarParameter*, uintptr_t))(Il2CppBase() + 0x292837C))(this, value);
	}
	template <typename T = uint32_t> T get_commonAvatarId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x2928384))(this);
	}
	template <typename T = void> T set_commonAvatarId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x292838C))(this, value);
	}
	template <typename T = uint32_t> T get_avatarSkinId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x292839C))(this);
	}
	template <typename T = void> T set_avatarSkinId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x29283A4))(this, value);
	}
	template <typename T = bool> T get_needAutoRotate() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283AC))(this);
	}
	template <typename T = void> T set_needAutoRotate(bool value) {
		return ((T (*)(CommonAvatarParameter*, bool))(Il2CppBase() + 0x29283B4))(this, value);
	}
	template <typename T = uint32_t> T get_roleHatId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283BC))(this);
	}
	template <typename T = void> T set_roleHatId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x29283C4))(this, value);
	}
	template <typename T = uint32_t> T get_roleBagId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283CC))(this);
	}
	template <typename T = void> T set_roleBagId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x29283D4))(this, value);
	}
	template <typename T = uint32_t> T get_roleClothId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283DC))(this);
	}
	template <typename T = void> T set_roleClothId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x29283E4))(this, value);
	}
	template <typename T = uint32_t> T get_roleSuitId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283EC))(this);
	}
	template <typename T = void> T set_roleSuitId(uint32_t value) {
		return ((T (*)(CommonAvatarParameter*, uint32_t))(Il2CppBase() + 0x29283F4))(this, value);
	}
	template <typename T = uintptr_t> T get_roleHatAssetId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x29283FC))(this);
	}
	template <typename T = void> T set_roleHatAssetId(uintptr_t value) {
		return ((T (*)(CommonAvatarParameter*, uintptr_t))(Il2CppBase() + 0x2928404))(this, value);
	}
	template <typename T = uintptr_t> T get_roleBagAssetId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x292840C))(this);
	}
	template <typename T = void> T set_roleBagAssetId(uintptr_t value) {
		return ((T (*)(CommonAvatarParameter*, uintptr_t))(Il2CppBase() + 0x2928414))(this, value);
	}
	template <typename T = uintptr_t> T get_roleClothAssetId() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x292841C))(this);
	}
	template <typename T = void> T set_roleClothAssetId(uintptr_t value) {
		return ((T (*)(CommonAvatarParameter*, uintptr_t))(Il2CppBase() + 0x2928424))(this, value);
	}
	template <typename T = Il2CppString*> T get_roleAction() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x292842C))(this);
	}
	template <typename T = void> T set_roleAction(Il2CppString* value) {
		return ((T (*)(CommonAvatarParameter*, Il2CppString*))(Il2CppBase() + 0x2928434))(this, value);
	}
	template <typename T = Il2CppVector3> T get_roleEuler() {
		return ((T (*)(CommonAvatarParameter*))(Il2CppBase() + 0x292843C))(this);
	}
	template <typename T = void> T set_roleEuler(Il2CppVector3 value) {
		return ((T (*)(CommonAvatarParameter*, Il2CppVector3))(Il2CppBase() + 0x2928450))(this, value);
	}

};

}
