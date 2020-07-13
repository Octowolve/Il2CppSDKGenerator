#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ActorInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ComponentInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SimpleComponentInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSimpleComponentDef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponentDef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ComponentInfo() {
		return ((T (*)(ActorInfo*))(Il2CppBase() + 0x2B3A444))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SimpleComponentInfo() {
		return ((T (*)(ActorInfo*))(Il2CppBase() + 0x2B3A44C))(this);
	}
	template <typename T = void> T set_SimpleComponentInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(ActorInfo*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2B3A454))(this, value);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(ActorInfo*))(Il2CppBase() + 0x2B3A45C))(this);
	}
	template <typename T = void> T set_AssetID(int32_t value) {
		return ((T (*)(ActorInfo*, int32_t))(Il2CppBase() + 0x2B3A464))(this, value);
	}
	template <typename T = void> T AddSimpleComponentDef() {
		return ((T (*)(ActorInfo*))(Il2CppBase() + 0x1E7E664))(this);
	}
	template <typename T = void> T AddComponentDef() {
		return ((T (*)(ActorInfo*))(Il2CppBase() + 0x1E7E4E0))(this);
	}
	template <typename T = uintptr_t> static T Create(int32_t assetID, bool shouldSpawnFromPool, Il2CppArray<uintptr_t>* components) {
		return ((T (*)(void *, int32_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B3A46C))(0, assetID, shouldSpawnFromPool, components);
	}

};

}
