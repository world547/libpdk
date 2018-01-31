// @copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Created by softboy on 2018/01/31.

#include "pdk/global/Global.h"
#include "pdk/global/PlatformDefs.h"
#include "pdk/kernel/HashFuncs.h"
#include "pdk/base/lang/String.h"
#include "pdk/utils/Locale.h"
#include "pdk/utils/internal/LocalePrivate.h"
#include "pdk/utils/internal/LocaleDataPrivate.h"
#include "pdk/base/time/Date.h"
#include "pdk/base/time/DateTime.h"
#include "pdk/base/time/Time.h"

namespace pdk {
namespace utils {

namespace internal {
#ifndef PDK_NO_SYSTEMLOCALE

static SystemLocale *sg_systemLocale = nullptr;

class SystemLocaleSingleton : public SystemLocale
{
   
};

#endif // PDK_NO_SYSTEMLOCALE
} // internal

} // utils
} // pdk
