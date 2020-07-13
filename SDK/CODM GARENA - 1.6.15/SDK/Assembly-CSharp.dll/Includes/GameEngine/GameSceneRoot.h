#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameSceneRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameSceneRoot"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& DeavctiveListForMiddle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DeavctiveListForLow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DeavctiveListForVeryLow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DeavctiveListForImpatient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LODGroups() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mQualityLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactiveGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E32B4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameSceneRoot*))(Il2CppBase() + 0x36E3334))(this);
	}
	template <typename T = void> T SetQuality(uintptr_t level) {
		return ((T (*)(GameSceneRoot*, uintptr_t))(Il2CppBase() + 0x36E3448))(this, level);
	}
	template <typename T = void> T DeactiveGameObjects(Il2CppList<uintptr_t>* goes) {
		return ((T (*)(GameSceneRoot*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36E36D0))(this, goes);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameSceneRoot*))(Il2CppBase() + 0x36E3874))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameSceneRoot*))(Il2CppBase() + 0x36E3978))(this);
	}

};

}
