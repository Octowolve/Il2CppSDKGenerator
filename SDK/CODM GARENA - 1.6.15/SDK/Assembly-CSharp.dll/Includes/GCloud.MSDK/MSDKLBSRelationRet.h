#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLBSRelationRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLBSRelationRet"));
	}

	template <typename T = Il2CppString*> T& isLost() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& personList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_IsLost() {
		return ((T (*)(MSDKLBSRelationRet*))(Il2CppBase() + 0x46CD4D0))(this);
	}
	template <typename T = void> T set_IsLost(Il2CppString* value) {
		return ((T (*)(MSDKLBSRelationRet*, Il2CppString*))(Il2CppBase() + 0x46CD4D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PersonInfoList() {
		return ((T (*)(MSDKLBSRelationRet*))(Il2CppBase() + 0x46CD4E0))(this);
	}
	template <typename T = void> T set_PersonInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(MSDKLBSRelationRet*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x46CD4E8))(this, value);
	}

};

}
