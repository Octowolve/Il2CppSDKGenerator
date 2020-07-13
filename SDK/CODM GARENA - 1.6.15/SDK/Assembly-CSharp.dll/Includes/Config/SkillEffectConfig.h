#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SkillEffectConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SkillEffectConfig"));
	}

	template <typename T = uintptr_t> T& ESkillCond() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ECondOp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& CondParam() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CondTarget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EEffectType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& EffectTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& EffectOverlay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& EffectMaxLayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& AssetEffectDic() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnalyticalEffectParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T AnalyticalEffectParam(Il2CppString* param) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30E1844))(0, param);
	}
	template <typename T = uintptr_t> static T Create(int32_t cond, int32_t condOp, Il2CppString* condParam, int32_t condTarget, int32_t effect, Il2CppString* effectParam1, int32_t effectTime, int32_t effectOverlay, int32_t effectMaxLayer, Il2CppString* clientEffect) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30E1BA8))(0, cond, condOp, condParam, condTarget, effect, effectParam1, effectTime, effectOverlay, effectMaxLayer, clientEffect);
	}

};

}
