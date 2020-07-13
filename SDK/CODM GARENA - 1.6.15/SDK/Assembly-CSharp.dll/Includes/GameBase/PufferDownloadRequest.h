#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PufferDownloadRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PufferDownloadRequest"));
	}

	template <typename T = int32_t> T& DynamicType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& FinishCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ProgressCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& FileList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& DownloadingDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasError() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FinishAcc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& TotalSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& WholeSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_NowSize() {
		return ((T (*)(PufferDownloadRequest*))(Il2CppBase() + 0x2DC41CC))(this);
	}

};

}
