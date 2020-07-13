#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialUpdater"));
	}

	template <typename T = int32_t> T& m_PropertyID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CurTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_rendererList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Block() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfigFromWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(Il2CppList<uintptr_t>* rendererList, uintptr_t wrapper) {
		return ((T (*)(MaterialUpdater*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4AACD34))(this, rendererList, wrapper);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MaterialUpdater*))(Il2CppBase() + 0x4AACE0C))(this);
	}
	template <typename T = void> T Update(float delta) {
		return ((T (*)(MaterialUpdater*, float))(Il2CppBase() + 0x4AACEB8))(this, delta);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(MaterialUpdater*))(Il2CppBase() + 0x4AACFEC))(this);
	}
	template <typename T = bool> T IsRunning() {
		return ((T (*)(MaterialUpdater*))(Il2CppBase() + 0x4AAD090))(this);
	}
	template <typename T = void> T InitConfigFromWrapper(uintptr_t wrapper) {
		return ((T (*)(MaterialUpdater*, uintptr_t))(Il2CppBase() + 0x4AAC51C))(this, wrapper);
	}
	template <typename T = void> T HandleMaterialUpdate() {
		return ((T (*)(MaterialUpdater*))(Il2CppBase() + 0x0))(this);
	}

};

}
