#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuildPartChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuildPartChecker"));
	}

	template <typename T = uintptr_t> T& BuildPart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllMaterial() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Box() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ColliderResult() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsMain() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_OffsetWithParent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_AccuHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_AccuHeightMax() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_AccuHeightMin() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_OldShader() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_NewShader() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsChanging() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPhysicsMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuildPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAvaliable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterialColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetPhysicsMat() {
		return ((T (*)(BuildPartChecker*))(Il2CppBase() + 0x3C4D2F8))(this);
	}
	template <typename T = void> T SetBuildPart(uintptr_t part, bool changeMat) {
		return ((T (*)(BuildPartChecker*, uintptr_t, bool))(Il2CppBase() + 0x3C4D414))(this, part, changeMat);
	}
	template <typename T = void> T ChangeMat(bool change) {
		return ((T (*)(BuildPartChecker*, bool))(Il2CppBase() + 0x3C4D71C))(this, change);
	}
	template <typename T = bool> T CheckMantle(Il2CppVector3 center, Il2CppVector3 extent) {
		return ((T (*)(BuildPartChecker*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3C4DB38))(this, center, extent);
	}
	template <typename T = bool> T CheckAvaliable() {
		return ((T (*)(BuildPartChecker*))(Il2CppBase() + 0x3C4DE58))(this);
	}
	template <typename T = void> T ChangeMaterialColor(bool canBuild) {
		return ((T (*)(BuildPartChecker*, bool))(Il2CppBase() + 0x3C4EDF4))(this, canBuild);
	}

};

}
