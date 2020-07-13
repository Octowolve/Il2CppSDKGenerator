#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ZeroSocketHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ZeroSocketHandler"));
	}

	template <typename T = uintptr_t> T& m_Trans() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsInit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& renderes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraMaterials() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExtraMateris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_CacheTransform() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49EC954))(this);
	}
	template <typename T = void> T SetExtraMateris(Il2CppList<uintptr_t>* mats) {
		return ((T (*)(ZeroSocketHandler*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x49ECA24))(this, mats);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(ZeroSocketHandler*, uintptr_t))(Il2CppBase() + 0x49ECCE0))(this, owner);
	}
	template <typename T = void> T StartToInit() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49ECD88))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49ECE2C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49ED384))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49ED77C))(this);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(ZeroSocketHandler*))(Il2CppBase() + 0x49EDA94))(this);
	}

};

}
