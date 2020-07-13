#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class StrengthenEffectConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "StrengthenEffectConfig"));
	}

	template <typename T = int32_t> T& SkillID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& EffectID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ModifyMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EffectConfig() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& AssetSkillDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStringToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T Create(int32_t skillID, int32_t effectID, int32_t modifyMode, Il2CppString* cond, Il2CppString* condOp, Il2CppString* condParam, Il2CppString* condTarget, Il2CppString* effect, Il2CppString* effectParam1, Il2CppString* effectTime, Il2CppString* effectOverlay, Il2CppString* effectMaxLayer, Il2CppString* clientEffect, Il2CppString* clientSkill) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x30ECA1C))(0, skillID, effectID, modifyMode, cond, condOp, condParam, condTarget, effect, effectParam1, effectTime, effectOverlay, effectMaxLayer, clientEffect, clientSkill);
	}
	template <typename T = int32_t> static T TryStringToInt(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30ECC00))(0, str);
	}

};

}
