#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LevelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LevelInfo"));
	}

	template <typename T = Il2CppString*> T& LevelName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& DynamicLoadPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& DynamicLoadParentScenePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& VirtualSceneDataPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& ScenePathList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<bool>*> T& StreamingFlags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SOCDataPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& BuildToMobile() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& DynamicType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_SingleSceneName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleSceneName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRRuntimeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(LevelInfo*, uintptr_t))(Il2CppBase() + 0x24950BC))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LevelInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x249523C))(this, bytes, position);
	}
	template <typename T = Il2CppString*> T GetSingleSceneName() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x249564C))(this);
	}
	template <typename T = bool> T IsBRRuntimeMap() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x24957B4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x24958D0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x2495A0C))(this);
	}

};

}
