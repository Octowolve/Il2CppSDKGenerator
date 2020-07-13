#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MatineeSndCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MatineeSndCfg"));
	}

	template <typename T = Il2CppString*> T& m_UniqueItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MapName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SequenceName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MatineeSound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& MatEndSnd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_ID() {
		return ((T (*)(MatineeSndCfg*))(Il2CppBase() + 0x4AAD9F8))(this);
	}
	template <typename T = bool> T ReadConfigs(Il2CppString* strLine, int32_t iItemCount, Il2CppArray<uintptr_t>* strKeys, Il2CppArray<uintptr_t>* pCustomFieldInfos) {
		return ((T (*)(MatineeSndCfg*, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AADA00))(this, strLine, iItemCount, strKeys, pCustomFieldInfos);
	}

};

}
