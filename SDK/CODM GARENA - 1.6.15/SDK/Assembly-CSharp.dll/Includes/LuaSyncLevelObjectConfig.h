#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaSyncLevelObjectConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaSyncLevelObjectConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& ExportDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& ExportParamDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllExportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParamList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddConfigList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportParamDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetAllExportList() {
		return ((T (*)(LuaSyncLevelObjectConfig*))(Il2CppBase() + 0x4353B7C))(this);
	}
	template <typename T = void> T SetParamList() {
		return ((T (*)(LuaSyncLevelObjectConfig*))(Il2CppBase() + 0x4353C14))(this);
	}
	template <typename T = void> T AddConfigList(Il2CppString* exportName, Il2CppList<uintptr_t>* list) {
		return ((T (*)(LuaSyncLevelObjectConfig*, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4353CAC))(this, exportName, list);
	}
	template <typename T = void> T AddParam(Il2CppString* paramParentName, uintptr_t param) {
		return ((T (*)(LuaSyncLevelObjectConfig*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4353DA8))(this, paramParentName, param);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T GetExportParamDic() {
		return ((T (*)(LuaSyncLevelObjectConfig*))(Il2CppBase() + 0x4351C50))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T GetExportDic() {
		return ((T (*)(LuaSyncLevelObjectConfig*))(Il2CppBase() + 0x4351B64))(this);
	}
	template <typename T = Il2CppString*> T GetExportClassName() {
		return ((T (*)(LuaSyncLevelObjectConfig*))(Il2CppBase() + 0x4353F58))(this);
	}

};

}
