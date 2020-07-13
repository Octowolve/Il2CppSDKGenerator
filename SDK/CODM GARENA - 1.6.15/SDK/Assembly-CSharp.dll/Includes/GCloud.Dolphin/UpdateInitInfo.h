#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class UpdateInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "UpdateInitInfo"));
	}

	template <typename T = uintptr_t> T& updateInitType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& gameUpdateUrl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& versionUrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& updateChannelId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& worldId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& grayUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& getChannelConfig() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& getRegionid() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& bFirst_source_in_apk() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& bObb_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& mNeedExtractList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_append_source_action() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mCreateDiffFilelist() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
