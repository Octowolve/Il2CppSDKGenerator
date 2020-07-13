#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TargetQueryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TargetQueryInfo"));
	}

	template <typename T = int32_t> static T& MAX_TARGET_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& mStartPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& LastUpdateFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TargetInfoCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LastRetrievedTargetDis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CachedTargetInfoList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Setup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T Setup(Il2CppVector3 startPos, uintptr_t friendCamp) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3432DC4))(0, startPos, friendCamp);
	}
	template <typename T = void> T SetupImpl(Il2CppVector3 startPos, uintptr_t friendCamp) {
		return ((T (*)(TargetQueryInfo*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3432F38))(this, startPos, friendCamp);
	}
	template <typename T = uintptr_t> T GetNextTarget() {
		return ((T (*)(TargetQueryInfo*))(Il2CppBase() + 0x34333BC))(this);
	}

};

}
