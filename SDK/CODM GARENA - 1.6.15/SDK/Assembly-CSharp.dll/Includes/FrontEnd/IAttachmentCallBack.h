#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class IAttachmentCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "IAttachmentCallBack"));
	}


	template <typename T = void> T OnAttachmentReady(uintptr_t attachment, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* ShowexcludeObjList) {
		return ((T (*)(IAttachmentCallBack*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, attachment, basicUselessIds, ShowexcludeObjList);
	}
	template <typename T = void> T AddBox(uintptr_t box) {
		return ((T (*)(IAttachmentCallBack*, uintptr_t))(Il2CppBase() + 0x0))(this, box);
	}
	template <typename T = void> T RemoveBox(uintptr_t box) {
		return ((T (*)(IAttachmentCallBack*, uintptr_t))(Il2CppBase() + 0x0))(this, box);
	}

};

}
