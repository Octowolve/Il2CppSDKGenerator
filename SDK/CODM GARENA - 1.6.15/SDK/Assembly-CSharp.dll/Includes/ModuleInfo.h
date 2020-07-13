#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModuleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModuleInfo"));
	}

	template <typename T = Il2CppString*> T& moduleName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& cacheKey() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& moduleState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& nowDownSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& totalDownSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& readyFileCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& totalFileCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& resQuality() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& readySize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& readyCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lastCheckQuickInCacheTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& fileIdList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fileProgressList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& fileProgressDic() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& moduleDownloadCBList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOneFileProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecResultCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneModuleFileListWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleFileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T AddOneFileProgress(uintptr_t moduleFileProgress) {
		return ((T (*)(ModuleInfo*, uintptr_t))(Il2CppBase() + 0x33111E8))(this, moduleFileProgress);
	}
	template <typename T = bool> T ProcessCallBack() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x330E824))(this);
	}
	template <typename T = void> T ExecResultCallBack() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x331874C))(this);
	}
	template <typename T = void> T ExecProgressCallBack() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x3318960))(this);
	}
	template <typename T = void> T ClearAllCallBack() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x3318B60))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetOneModuleFileListWrapper(Il2CppString* oneModuleName, uintptr_t moduleResQuality) {
		return ((T (*)(ModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3318530))(this, oneModuleName, moduleResQuality);
	}
	template <typename T = bool> T IsMultiModule() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x33185FC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAtomicModuleList() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x33186A4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetModuleFileList() {
		return ((T (*)(ModuleInfo*))(Il2CppBase() + 0x33102B4))(this);
	}

};

}
