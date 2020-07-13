#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialUpdaterWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialUpdaterWrapper"));
	}

	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_PropertyName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_StartFloatValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_EndFloatValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_StartColorValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_EndColorValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_StartVector4Value() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_EndVector4Value() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Updater() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(Il2CppList<uintptr_t>* renderer) {
		return ((T (*)(MaterialUpdaterWrapper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AAD1DC))(this, renderer);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MaterialUpdaterWrapper*))(Il2CppBase() + 0x4AAD3F4))(this);
	}
	template <typename T = void> T Update(float delta) {
		return ((T (*)(MaterialUpdaterWrapper*, float))(Il2CppBase() + 0x4AAD4AC))(this, delta);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(MaterialUpdaterWrapper*))(Il2CppBase() + 0x4AAD570))(this);
	}

};

}
