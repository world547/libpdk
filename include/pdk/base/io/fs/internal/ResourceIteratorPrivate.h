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
// Created by softboy on 2018/02/08.

#ifndef PDK_M_BASE_IO_FS_INTERNAL_RESOURCE_ITERATOR_PRIVATE_H
#define PDK_M_BASE_IO_FS_INTERNAL_RESOURCE_ITERATOR_PRIVATE_H

#include "pdk/base/io/fs/internal/AbstractFileEnginePrivate.h"
#include "pdk/base/io/fs/Dir.h"

namespace pdk {
namespace io {
namespace fs {
namespace internal {

class ResourceFileEngineIteratorPrivate;
class ResourceFileEngineIterator : public AbstractFileEngineIterator
{
public:
   ResourceFileEngineIterator(Dir::Filters filters, const StringList &filterNames);
   ~ResourceFileEngineIterator();
   
   String next() override;
   bool hasNext() const override;
   
   String getCurrentFileName() const override;
   
private:
   mutable StringList m_entries;
   mutable int m_index;
};

} // internal
} // fs
} // io
} // pdk

#endif // PDK_M_BASE_IO_FS_INTERNAL_RESOURCE_ITERATOR_PRIVATE_H
